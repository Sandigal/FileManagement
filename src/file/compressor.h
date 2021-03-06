﻿/*
 * The Doujinfix – a Qt-based batch arrangement software for Doujinshi that
 * includes Doujinshi file name standardization and compressed image replacement.
 * Copyright (C) 2019 Sandiagal
 *
 * This program is free software:
 * you can redistribute it and/or modify it under the terms of the
 * GNU General Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with this program.
 * If not, see <http://www.gnu.org/licenses/>.
 *
 * You can contact us at sandiagal2525@gmail.com
*/

#ifndef COMPRESSOR_H
#define COMPRESSOR_H

#include "file/baseFile.h"

class Compressor : public BaseFile
{
    Q_OBJECT
public:
    explicit Compressor(Setting *setting, QObject *parent = nullptr);

    void start() override;
    void revoke() override;

private:
    QVector<int> subimageCompression(const QString &path);

signals:
    void setDirBarValue(int value);
    void setFileBarValue(int value);

};

#endif // COMPRESSOR_H

/*
 * LCD Image Converter. Converts images and fonts for embedded applciations.
 * Copyright (C) 2012 riuson
 * mailto: riuson@gmail.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/
 */

#include "templateoptions.h"
//-----------------------------------------------------------------------------
TemplateOptions::TemplateOptions(QObject *parent) :
    QObject(parent)
{
    this->mImageTemplate = ":/templates/image_convert";
    this->mFontTemplate = ":/templates/font_convert";
}
//-----------------------------------------------------------------------------
const QString &TemplateOptions::image() const
{
    return this->mImageTemplate;
}
//-----------------------------------------------------------------------------
const QString &TemplateOptions::font() const
{
    return this->mFontTemplate;
}
//-----------------------------------------------------------------------------
void TemplateOptions::setImage(const QString &filename)
{
    this->mImageTemplate = filename;

    emit this->changed();
}
//-----------------------------------------------------------------------------
void TemplateOptions::setFont(const QString &filename)
{
    this->mFontTemplate = filename;

    emit this->changed();
}
//-----------------------------------------------------------------------------
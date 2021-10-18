/*
 * Copyright (C) 2020 ~ 2021 Uniontech Software Technology Co., Ltd.
 *
 * Author:     xushitong<xushitong@uniontech.com>
 *
 * Maintainer: max-lv<lvwujun@uniontech.com>
 *             lanxuesong<lanxuesong@uniontech.com>
 *             zhangsheng<zhangsheng@uniontech.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef DFMMOUNTDEFINES_H
#define DFMMOUNTDEFINES_H

#include "dfmmount_global.h"

#include <QtCore/QtGlobal>

DFM_MOUNT_BEGIN_NS

template<typename ParentPrivate, typename SubPrivate>
inline SubPrivate *castSubPrivate(ParentPrivate *p) {
    auto pPointer = dynamic_cast<SubPrivate *>(p);
    if (!pPointer)
        abort();
    return pPointer;
}

DFM_MOUNT_END_NS

#endif // DFMMOUNTDEFINES_H
/*
    This file is part of the Kasten Framework, made within the KDE community.

    SPDX-FileCopyrightText: 2009 Friedrich W. H. Kossebau <kossebau@kde.org>

    SPDX-License-Identifier: LGPL-2.1-only OR LGPL-3.0-only OR LicenseRef-KDE-Accepted-LGPL
*/

#include "bytearrayrandomdatageneratorconfigeditorfactory.hpp"

// lib
#include "bytearrayrandomdatageneratorconfigeditor.hpp"
#include "bytearrayrandomdatagenerator.hpp"

namespace Kasten {

ByteArrayRandomDataGeneratorConfigEditorFactory::ByteArrayRandomDataGeneratorConfigEditorFactory() = default;

ByteArrayRandomDataGeneratorConfigEditorFactory::~ByteArrayRandomDataGeneratorConfigEditorFactory() = default;

AbstractModelDataGeneratorConfigEditor* ByteArrayRandomDataGeneratorConfigEditorFactory::tryCreateConfigEditor(AbstractModelDataGenerator* generator) const
{
    AbstractModelDataGeneratorConfigEditor* result = nullptr;

    auto* randomDataGenerator = qobject_cast<ByteArrayRandomDataGenerator*>(generator);

    if (randomDataGenerator) {
        result = new ByteArrayRandomDataGeneratorConfigEditor(randomDataGenerator);
    }

    return result;
}

}

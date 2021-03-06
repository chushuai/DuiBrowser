/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

/*
* This file was modified by Electronic Arts Inc Copyright � 2009-2010
*/

#include "config.h"

#include "JSEntityReference.h"

#include <wtf/GetPtr.h>

#include "EntityReference.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashTableValue JSEntityReferenceTableValues[2] =
{
    { "constructor", (intptr_t)JSEntityReference::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSEntityReferenceTable = { 0, JSEntityReferenceTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSEntityReferenceConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSEntityReferenceConstructorTable = { 0, JSEntityReferenceConstructorTableValues, 0 };

class JSEntityReferenceConstructor : public DOMObject {
public:
    JSEntityReferenceConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSEntityReferencePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSEntityReferenceConstructor::s_info = { "EntityReferenceConstructor", 0, &JSEntityReferenceConstructorTable, 0 };

bool JSEntityReferenceConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSEntityReferenceConstructor, DOMObject>(exec, &JSEntityReferenceConstructorTable, this, propertyName, slot);
}

JSValue* JSEntityReferenceConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSEntityReferencePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSEntityReferencePrototypeTable = { 0, JSEntityReferencePrototypeTableValues, 0 };

const ClassInfo JSEntityReferencePrototype::s_info = { "EntityReferencePrototype", 0, &JSEntityReferencePrototypeTable, 0 };

JSObject* JSEntityReferencePrototype::self(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier prototypeIdentifier(exec, "[[JSEntityReference.prototype]]");
    return KJS::cacheGlobalObject<JSEntityReferencePrototype>(exec, prototypeIdentifier);
}

const ClassInfo JSEntityReference::s_info = { "EntityReference", &JSNode::s_info, &JSEntityReferenceTable , 0 };

JSEntityReference::JSEntityReference(JSObject* prototype, EntityReference* impl)
    : JSNode(prototype, impl)
{
}

bool JSEntityReference::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSEntityReference, Base>(exec, &JSEntityReferenceTable, this, propertyName, slot);
}

JSValue* JSEntityReference::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSEntityReference::getConstructor(ExecState* exec)
{
    // Changed by Paul Pedriana (1/2009), as the static new was creating a memory leak. If this gets called a lot then we can consider making it a static pointer that's freed on shutdown.
    const Identifier constructorIdentifier(exec, "[[EntityReference.constructor]]");
    return KJS::cacheGlobalObject<JSEntityReferenceConstructor>(exec, constructorIdentifier);
}


}

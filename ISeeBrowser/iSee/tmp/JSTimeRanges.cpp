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

#include "config.h"

#include "JSTimeRanges.h"

#include <wtf/GetPtr.h>

#include "TimeRanges.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSTimeRanges)

/* Hash table */

static const HashTableValue JSTimeRangesTableValues[2] =
{
    { "length", (intptr_t)JSTimeRanges::LengthAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSTimeRangesTable = { 0, JSTimeRangesTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSTimeRangesPrototypeTableValues[3] =
{
    { "start", (intptr_t)jsTimeRangesPrototypeFunctionStart, DontDelete|Function, 1 },
    { "end", (intptr_t)jsTimeRangesPrototypeFunctionEnd, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSTimeRangesPrototypeTable = { 31, JSTimeRangesPrototypeTableValues, 0 };

const ClassInfo JSTimeRangesPrototype::s_info = { "TimeRangesPrototype", 0, &JSTimeRangesPrototypeTable, 0 };

JSObject* JSTimeRangesPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSTimeRanges.prototype]]");
    return JSC::cacheGlobalObject<JSTimeRangesPrototype>(exec, *prototypeIdentifier);
}

bool JSTimeRangesPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSTimeRangesPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSTimeRanges::s_info = { "TimeRanges", 0, &JSTimeRangesTable , 0 };

JSTimeRanges::JSTimeRanges(JSObject* prototype, TimeRanges* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSTimeRanges::~JSTimeRanges()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSTimeRanges::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSTimeRanges, Base>(exec, &JSTimeRangesTable, this, propertyName, slot);
}

JSValue* JSTimeRanges::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case LengthAttrNum: {
        TimeRanges* imp = static_cast<TimeRanges*>(impl());
        return jsNumber(exec, imp->length());
    }
    }
    return 0;
}

JSValue* jsTimeRangesPrototypeFunctionStart(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSTimeRanges::s_info))
        return throwError(exec, TypeError);
    JSTimeRanges* castedThisObj = static_cast<JSTimeRanges*>(thisValue);
    TimeRanges* imp = static_cast<TimeRanges*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    unsigned index = args.at(exec, 0)->toInt32(exec);


    JSC::JSValue* result = jsNumber(exec, imp->start(index, ec));
    setDOMException(exec, ec);
    return result;
}

JSValue* jsTimeRangesPrototypeFunctionEnd(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSTimeRanges::s_info))
        return throwError(exec, TypeError);
    JSTimeRanges* castedThisObj = static_cast<JSTimeRanges*>(thisValue);
    TimeRanges* imp = static_cast<TimeRanges*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    unsigned index = args.at(exec, 0)->toInt32(exec);


    JSC::JSValue* result = jsNumber(exec, imp->end(index, ec));
    setDOMException(exec, ec);
    return result;
}

JSC::JSValue* toJS(JSC::ExecState* exec, TimeRanges* obj)
{
    return cacheDOMObject<TimeRanges, JSTimeRanges, JSTimeRangesPrototype>(exec, obj);
}
TimeRanges* toTimeRanges(JSC::JSValue* val)
{
    return val->isObject(&JSTimeRanges::s_info) ? static_cast<JSTimeRanges*>(val)->impl() : 0;
}

}
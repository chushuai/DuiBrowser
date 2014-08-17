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


#if ENABLE(XSLT)

#include "JSXSLTProcessor.h"

#include <wtf/GetPtr.h>

#include "Document.h"
#include "DocumentFragment.h"
#include "NodeFilter.h"
#include "XSLTProcessor.h"

#include <kjs/Error.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSXSLTProcessor)

/* Hash table for prototype */

static const HashTableValue JSXSLTProcessorPrototypeTableValues[9] =
{
    { "importStylesheet", (intptr_t)jsXSLTProcessorPrototypeFunctionImportStylesheet, DontDelete|Function, 1 },
    { "transformToFragment", (intptr_t)jsXSLTProcessorPrototypeFunctionTransformToFragment, DontDelete|Function, 2 },
    { "transformToDocument", (intptr_t)jsXSLTProcessorPrototypeFunctionTransformToDocument, DontDelete|Function, 1 },
    { "setParameter", (intptr_t)jsXSLTProcessorPrototypeFunctionSetParameter, DontDelete|Function, 3 },
    { "getParameter", (intptr_t)jsXSLTProcessorPrototypeFunctionGetParameter, DontDelete|Function, 2 },
    { "removeParameter", (intptr_t)jsXSLTProcessorPrototypeFunctionRemoveParameter, DontDelete|Function, 2 },
    { "clearParameters", (intptr_t)jsXSLTProcessorPrototypeFunctionClearParameters, DontDelete|Function, 0 },
    { "reset", (intptr_t)jsXSLTProcessorPrototypeFunctionReset, DontDelete|Function, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSXSLTProcessorPrototypeTable = { 63, JSXSLTProcessorPrototypeTableValues, 0 };

const ClassInfo JSXSLTProcessorPrototype::s_info = { "XSLTProcessorPrototype", 0, &JSXSLTProcessorPrototypeTable, 0 };

JSObject* JSXSLTProcessorPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSXSLTProcessor.prototype]]");
    return JSC::cacheGlobalObject<JSXSLTProcessorPrototype>(exec, *prototypeIdentifier);
}

bool JSXSLTProcessorPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSXSLTProcessorPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSXSLTProcessor::s_info = { "XSLTProcessor", 0, 0 , 0 };

JSXSLTProcessor::JSXSLTProcessor(JSObject* prototype, XSLTProcessor* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSXSLTProcessor::~JSXSLTProcessor()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

JSValue* jsXSLTProcessorPrototypeFunctionImportStylesheet(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXSLTProcessor::s_info))
        return throwError(exec, TypeError);
    JSXSLTProcessor* castedThisObj = static_cast<JSXSLTProcessor*>(thisValue);
    return castedThisObj->importStylesheet(exec, args);
}

JSValue* jsXSLTProcessorPrototypeFunctionTransformToFragment(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXSLTProcessor::s_info))
        return throwError(exec, TypeError);
    JSXSLTProcessor* castedThisObj = static_cast<JSXSLTProcessor*>(thisValue);
    return castedThisObj->transformToFragment(exec, args);
}

JSValue* jsXSLTProcessorPrototypeFunctionTransformToDocument(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXSLTProcessor::s_info))
        return throwError(exec, TypeError);
    JSXSLTProcessor* castedThisObj = static_cast<JSXSLTProcessor*>(thisValue);
    return castedThisObj->transformToDocument(exec, args);
}

JSValue* jsXSLTProcessorPrototypeFunctionSetParameter(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXSLTProcessor::s_info))
        return throwError(exec, TypeError);
    JSXSLTProcessor* castedThisObj = static_cast<JSXSLTProcessor*>(thisValue);
    return castedThisObj->setParameter(exec, args);
}

JSValue* jsXSLTProcessorPrototypeFunctionGetParameter(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXSLTProcessor::s_info))
        return throwError(exec, TypeError);
    JSXSLTProcessor* castedThisObj = static_cast<JSXSLTProcessor*>(thisValue);
    return castedThisObj->getParameter(exec, args);
}

JSValue* jsXSLTProcessorPrototypeFunctionRemoveParameter(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXSLTProcessor::s_info))
        return throwError(exec, TypeError);
    JSXSLTProcessor* castedThisObj = static_cast<JSXSLTProcessor*>(thisValue);
    return castedThisObj->removeParameter(exec, args);
}

JSValue* jsXSLTProcessorPrototypeFunctionClearParameters(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXSLTProcessor::s_info))
        return throwError(exec, TypeError);
    JSXSLTProcessor* castedThisObj = static_cast<JSXSLTProcessor*>(thisValue);
    XSLTProcessor* imp = static_cast<XSLTProcessor*>(castedThisObj->impl());

    imp->clearParameters();
    return jsUndefined();
}

JSValue* jsXSLTProcessorPrototypeFunctionReset(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSXSLTProcessor::s_info))
        return throwError(exec, TypeError);
    JSXSLTProcessor* castedThisObj = static_cast<JSXSLTProcessor*>(thisValue);
    XSLTProcessor* imp = static_cast<XSLTProcessor*>(castedThisObj->impl());

    imp->reset();
    return jsUndefined();
}

JSC::JSValue* toJS(JSC::ExecState* exec, XSLTProcessor* obj)
{
    return cacheDOMObject<XSLTProcessor, JSXSLTProcessor, JSXSLTProcessorPrototype>(exec, obj);
}
XSLTProcessor* toXSLTProcessor(JSC::JSValue* val)
{
    return val->isObject(&JSXSLTProcessor::s_info) ? static_cast<JSXSLTProcessor*>(val)->impl() : 0;
}

}

#endif // ENABLE(XSLT)
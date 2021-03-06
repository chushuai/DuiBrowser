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

#include "JSWebKitCSSKeyframeRule.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"
#include "KURL.h"
#include "WebKitCSSKeyframeRule.h"

#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebKitCSSKeyframeRule)

/* Hash table */

static const HashTableValue JSWebKitCSSKeyframeRuleTableValues[4] =
{
    { "keyText", (intptr_t)JSWebKitCSSKeyframeRule::KeyTextAttrNum, DontDelete, 0 },
    { "style", (intptr_t)JSWebKitCSSKeyframeRule::StyleAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSWebKitCSSKeyframeRule::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitCSSKeyframeRuleTable = { 15, JSWebKitCSSKeyframeRuleTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSWebKitCSSKeyframeRuleConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitCSSKeyframeRuleConstructorTable = { 0, JSWebKitCSSKeyframeRuleConstructorTableValues, 0 };

class JSWebKitCSSKeyframeRuleConstructor : public DOMObject {
public:
    JSWebKitCSSKeyframeRuleConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSWebKitCSSKeyframeRulePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSWebKitCSSKeyframeRuleConstructor::s_info = { "WebKitCSSKeyframeRuleConstructor", 0, &JSWebKitCSSKeyframeRuleConstructorTable, 0 };

bool JSWebKitCSSKeyframeRuleConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSKeyframeRuleConstructor, DOMObject>(exec, &JSWebKitCSSKeyframeRuleConstructorTable, this, propertyName, slot);
}

JSValue* JSWebKitCSSKeyframeRuleConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSWebKitCSSKeyframeRulePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitCSSKeyframeRulePrototypeTable = { 0, JSWebKitCSSKeyframeRulePrototypeTableValues, 0 };

const ClassInfo JSWebKitCSSKeyframeRulePrototype::s_info = { "WebKitCSSKeyframeRulePrototype", 0, &JSWebKitCSSKeyframeRulePrototypeTable, 0 };

JSObject* JSWebKitCSSKeyframeRulePrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSWebKitCSSKeyframeRule.prototype]]");
    return JSC::cacheGlobalObject<JSWebKitCSSKeyframeRulePrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSWebKitCSSKeyframeRule::s_info = { "WebKitCSSKeyframeRule", &JSCSSRule::s_info, &JSWebKitCSSKeyframeRuleTable , 0 };

JSWebKitCSSKeyframeRule::JSWebKitCSSKeyframeRule(JSObject* prototype, WebKitCSSKeyframeRule* impl)
    : JSCSSRule(prototype, impl)
{
}

bool JSWebKitCSSKeyframeRule::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSKeyframeRule, Base>(exec, &JSWebKitCSSKeyframeRuleTable, this, propertyName, slot);
}

JSValue* JSWebKitCSSKeyframeRule::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case KeyTextAttrNum: {
        WebKitCSSKeyframeRule* imp = static_cast<WebKitCSSKeyframeRule*>(impl());
        return jsString(exec, imp->keyText());
    }
    case StyleAttrNum: {
        WebKitCSSKeyframeRule* imp = static_cast<WebKitCSSKeyframeRule*>(impl());
        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSWebKitCSSKeyframeRule::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSWebKitCSSKeyframeRule, Base>(exec, propertyName, value, &JSWebKitCSSKeyframeRuleTable, this, slot);
}

void JSWebKitCSSKeyframeRule::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case KeyTextAttrNum: {
        WebKitCSSKeyframeRule* imp = static_cast<WebKitCSSKeyframeRule*>(impl());
        imp->setKeyText(value->toString(exec));
        break;
    }
    }
}

JSValue* JSWebKitCSSKeyframeRule::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[WebKitCSSKeyframeRule.constructor]]");
    return JSC::cacheGlobalObject<JSWebKitCSSKeyframeRuleConstructor>(exec, *constructorIdentifier);
}


}

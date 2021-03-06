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

#include "JSHTMLBlockquoteElement.h"

#include <wtf/GetPtr.h>

#include "HTMLBlockquoteElement.h"
#include "KURL.h"

#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSHTMLBlockquoteElement)

/* Hash table */

static const HashTableValue JSHTMLBlockquoteElementTableValues[3] =
{
    { "cite", (intptr_t)JSHTMLBlockquoteElement::CiteAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSHTMLBlockquoteElement::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLBlockquoteElementTable = { 15, JSHTMLBlockquoteElementTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSHTMLBlockquoteElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLBlockquoteElementConstructorTable = { 0, JSHTMLBlockquoteElementConstructorTableValues, 0 };

class JSHTMLBlockquoteElementConstructor : public DOMObject {
public:
    JSHTMLBlockquoteElementConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSHTMLBlockquoteElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLBlockquoteElementConstructor::s_info = { "HTMLBlockquoteElementConstructor", 0, &JSHTMLBlockquoteElementConstructorTable, 0 };

bool JSHTMLBlockquoteElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBlockquoteElementConstructor, DOMObject>(exec, &JSHTMLBlockquoteElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLBlockquoteElementConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLBlockquoteElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static const HashTable JSHTMLBlockquoteElementPrototypeTable = { 0, JSHTMLBlockquoteElementPrototypeTableValues, 0 };

const ClassInfo JSHTMLBlockquoteElementPrototype::s_info = { "HTMLBlockquoteElementPrototype", 0, &JSHTMLBlockquoteElementPrototypeTable, 0 };

JSObject* JSHTMLBlockquoteElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSHTMLBlockquoteElement.prototype]]");
    return JSC::cacheGlobalObject<JSHTMLBlockquoteElementPrototype>(exec, *prototypeIdentifier);
}

const ClassInfo JSHTMLBlockquoteElement::s_info = { "HTMLBlockquoteElement", &JSHTMLElement::s_info, &JSHTMLBlockquoteElementTable , 0 };

JSHTMLBlockquoteElement::JSHTMLBlockquoteElement(JSObject* prototype, HTMLBlockquoteElement* impl)
    : JSHTMLElement(prototype, impl)
{
}

bool JSHTMLBlockquoteElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBlockquoteElement, Base>(exec, &JSHTMLBlockquoteElementTable, this, propertyName, slot);
}

JSValue* JSHTMLBlockquoteElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case CiteAttrNum: {
        HTMLBlockquoteElement* imp = static_cast<HTMLBlockquoteElement*>(impl());
        return jsString(exec, imp->cite());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLBlockquoteElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSHTMLBlockquoteElement, Base>(exec, propertyName, value, &JSHTMLBlockquoteElementTable, this, slot);
}

void JSHTMLBlockquoteElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case CiteAttrNum: {
        HTMLBlockquoteElement* imp = static_cast<HTMLBlockquoteElement*>(impl());
        imp->setCite(valueToStringWithNullCheck(exec, value));
        break;
    }
    }
}

JSValue* JSHTMLBlockquoteElement::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[HTMLBlockquoteElement.constructor]]");
    return JSC::cacheGlobalObject<JSHTMLBlockquoteElementConstructor>(exec, *constructorIdentifier);
}


}

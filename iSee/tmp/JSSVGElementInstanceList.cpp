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


#if ENABLE(SVG)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGElementInstanceList.h"

#include <wtf/GetPtr.h>

#include "JSSVGElementInstance.h"
#include "SVGElementInstance.h"
#include "SVGElementInstanceList.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGElementInstanceList)

/* Hash table */

static const HashTableValue JSSVGElementInstanceListTableValues[2] =
{
    { "length", (intptr_t)JSSVGElementInstanceList::LengthAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGElementInstanceListTable = { 0, JSSVGElementInstanceListTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGElementInstanceListPrototypeTableValues[2] =
{
    { "item", (intptr_t)jsSVGElementInstanceListPrototypeFunctionItem, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGElementInstanceListPrototypeTable = { 0, JSSVGElementInstanceListPrototypeTableValues, 0 };

const ClassInfo JSSVGElementInstanceListPrototype::s_info = { "SVGElementInstanceListPrototype", 0, &JSSVGElementInstanceListPrototypeTable, 0 };

JSObject* JSSVGElementInstanceListPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGElementInstanceList.prototype]]");
    return JSC::cacheGlobalObject<JSSVGElementInstanceListPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGElementInstanceListPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGElementInstanceListPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGElementInstanceList::s_info = { "SVGElementInstanceList", 0, &JSSVGElementInstanceListTable , 0 };

JSSVGElementInstanceList::JSSVGElementInstanceList(JSObject* prototype, SVGElementInstanceList* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSSVGElementInstanceList::~JSSVGElementInstanceList()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSSVGElementInstanceList::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGElementInstanceList, Base>(exec, &JSSVGElementInstanceListTable, this, propertyName, slot);
}

JSValue* JSSVGElementInstanceList::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case LengthAttrNum: {
        SVGElementInstanceList* imp = static_cast<SVGElementInstanceList*>(impl());
        return jsNumber(exec, imp->length());
    }
    }
    return 0;
}

JSValue* jsSVGElementInstanceListPrototypeFunctionItem(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGElementInstanceList::s_info))
        return throwError(exec, TypeError);
    JSSVGElementInstanceList* castedThisObj = static_cast<JSSVGElementInstanceList*>(thisValue);
    SVGElementInstanceList* imp = static_cast<SVGElementInstanceList*>(castedThisObj->impl());
    unsigned index = args.at(exec, 0)->toInt32(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->item(index)));
    return result;
}

JSC::JSValue* toJS(JSC::ExecState* exec, SVGElementInstanceList* obj)
{
    return cacheDOMObject<SVGElementInstanceList, JSSVGElementInstanceList, JSSVGElementInstanceListPrototype>(exec, obj);
}
SVGElementInstanceList* toSVGElementInstanceList(JSC::JSValue* val)
{
    return val->isObject(&JSSVGElementInstanceList::s_info) ? static_cast<JSSVGElementInstanceList*>(val)->impl() : 0;
}

}

#endif // ENABLE(SVG)

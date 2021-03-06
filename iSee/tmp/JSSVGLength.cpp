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
#include "JSSVGLength.h"

#include <wtf/GetPtr.h>

#include "KURL.h"
#include "SVGLength.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGLength)

/* Hash table */

static const HashTableValue JSSVGLengthTableValues[6] =
{
    { "unitType", (intptr_t)JSSVGLength::UnitTypeAttrNum, DontDelete|ReadOnly, 0 },
    { "value", (intptr_t)JSSVGLength::ValueAttrNum, DontDelete, 0 },
    { "valueInSpecifiedUnits", (intptr_t)JSSVGLength::ValueInSpecifiedUnitsAttrNum, DontDelete, 0 },
    { "valueAsString", (intptr_t)JSSVGLength::ValueAsStringAttrNum, DontDelete, 0 },
    { "constructor", (intptr_t)JSSVGLength::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGLengthTable = { 255, JSSVGLengthTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSSVGLengthConstructorTableValues[12] =
{
    { "SVG_LENGTHTYPE_UNKNOWN", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_NUMBER", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_PERCENTAGE", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_EMS", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_EXS", (intptr_t)4, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_PX", (intptr_t)5, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_CM", (intptr_t)6, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_MM", (intptr_t)7, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_IN", (intptr_t)8, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_PT", (intptr_t)9, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_PC", (intptr_t)10, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGLengthConstructorTable = { 511, JSSVGLengthConstructorTableValues, 0 };

class JSSVGLengthConstructor : public DOMObject {
public:
    JSSVGLengthConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSSVGLengthPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSSVGLengthConstructor::s_info = { "SVGLengthConstructor", 0, &JSSVGLengthConstructorTable, 0 };

bool JSSVGLengthConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLengthConstructor, DOMObject>(exec, &JSSVGLengthConstructorTable, this, propertyName, slot);
}

JSValue* JSSVGLengthConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSSVGLengthPrototypeTableValues[14] =
{
    { "SVG_LENGTHTYPE_UNKNOWN", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_NUMBER", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_PERCENTAGE", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_EMS", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_EXS", (intptr_t)4, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_PX", (intptr_t)5, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_CM", (intptr_t)6, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_MM", (intptr_t)7, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_IN", (intptr_t)8, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_PT", (intptr_t)9, DontDelete|ReadOnly, 0 },
    { "SVG_LENGTHTYPE_PC", (intptr_t)10, DontDelete|ReadOnly, 0 },
    { "newValueSpecifiedUnits", (intptr_t)jsSVGLengthPrototypeFunctionNewValueSpecifiedUnits, DontDelete|Function, 2 },
    { "convertToSpecifiedUnits", (intptr_t)jsSVGLengthPrototypeFunctionConvertToSpecifiedUnits, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGLengthPrototypeTable = { 511, JSSVGLengthPrototypeTableValues, 0 };

const ClassInfo JSSVGLengthPrototype::s_info = { "SVGLengthPrototype", 0, &JSSVGLengthPrototypeTable, 0 };

JSObject* JSSVGLengthPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGLength.prototype]]");
    return JSC::cacheGlobalObject<JSSVGLengthPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGLengthPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGLengthPrototype, JSObject>(exec, &JSSVGLengthPrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGLengthPrototype::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

const ClassInfo JSSVGLength::s_info = { "SVGLength", 0, &JSSVGLengthTable , 0 };

JSSVGLength::JSSVGLength(JSObject* prototype, JSSVGPODTypeWrapper<SVGLength>* impl, SVGElement* context)
    : DOMObject(prototype)
    , m_context(context)
    , m_impl(impl)
{
}

JSSVGLength::~JSSVGLength()
{
    JSSVGDynamicPODTypeWrapperCache<SVGLength, SVGAnimatedLength>::forgetWrapper(m_impl.get());
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSSVGLength::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGLength, Base>(exec, &JSSVGLengthTable, this, propertyName, slot);
}

JSValue* JSSVGLength::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case UnitTypeAttrNum: {
        SVGLength imp(*impl());
        return jsNumber(exec, imp.unitType());
    }
    case ValueAttrNum: {
        return value(exec);
    }
    case ValueInSpecifiedUnitsAttrNum: {
        SVGLength imp(*impl());
        return jsNumber(exec, imp.valueInSpecifiedUnits());
    }
    case ValueAsStringAttrNum: {
        SVGLength imp(*impl());
        return jsString(exec, imp.valueAsString());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSSVGLength::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSSVGLength, Base>(exec, propertyName, value, &JSSVGLengthTable, this, slot);
}

void JSSVGLength::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case ValueAttrNum: {
        SVGLength imp(*impl());
        imp.setValue(value->toFloat(exec));
        m_impl->commitChange(imp, context());
        break;
    }
    case ValueInSpecifiedUnitsAttrNum: {
        SVGLength imp(*impl());
        imp.setValueInSpecifiedUnits(value->toFloat(exec));
        m_impl->commitChange(imp, context());
        break;
    }
    case ValueAsStringAttrNum: {
        SVGLength imp(*impl());
        imp.setValueAsString(valueToStringWithNullCheck(exec, value));
        m_impl->commitChange(imp, context());
        break;
    }
    }
}

JSValue* JSSVGLength::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[SVGLength.constructor]]");
    return JSC::cacheGlobalObject<JSSVGLengthConstructor>(exec, *constructorIdentifier);
}

JSValue* jsSVGLengthPrototypeFunctionNewValueSpecifiedUnits(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGLength::s_info))
        return throwError(exec, TypeError);
    JSSVGLength* castedThisObj = static_cast<JSSVGLength*>(thisValue);
    JSSVGPODTypeWrapper<SVGLength>* wrapper = castedThisObj->impl();
    SVGLength imp(*wrapper);
    unsigned short unitType = args.at(exec, 0)->toInt32(exec);
    float valueInSpecifiedUnits = args.at(exec, 1)->toFloat(exec);

    imp.newValueSpecifiedUnits(unitType, valueInSpecifiedUnits);
    wrapper->commitChange(imp, castedThisObj->context());
    return jsUndefined();
}

JSValue* jsSVGLengthPrototypeFunctionConvertToSpecifiedUnits(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGLength::s_info))
        return throwError(exec, TypeError);
    JSSVGLength* castedThisObj = static_cast<JSSVGLength*>(thisValue);
    return castedThisObj->convertToSpecifiedUnits(exec, args);
}

JSC::JSValue* toJS(JSC::ExecState* exec, JSSVGPODTypeWrapper<SVGLength>* obj, SVGElement* context)
{
    return cacheSVGDOMObject<JSSVGPODTypeWrapper<SVGLength>, JSSVGLength, JSSVGLengthPrototype>(exec, obj, context);
}
SVGLength toSVGLength(JSC::JSValue* val)
{
    return val->isObject(&JSSVGLength::s_info) ? (SVGLength) *static_cast<JSSVGLength*>(val)->impl() : SVGLength();
}

}

#endif // ENABLE(SVG)

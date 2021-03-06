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
#include "JSSVGPaint.h"

#include <wtf/GetPtr.h>

#include "KURL.h"
#include "SVGPaint.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGPaint)

/* Hash table */

static const HashTableValue JSSVGPaintTableValues[4] =
{
    { "paintType", (intptr_t)JSSVGPaint::PaintTypeAttrNum, DontDelete|ReadOnly, 0 },
    { "uri", (intptr_t)JSSVGPaint::UriAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSSVGPaint::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPaintTable = { 31, JSSVGPaintTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSSVGPaintConstructorTableValues[11] =
{
    { "SVG_PAINTTYPE_UNKNOWN", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_RGBCOLOR", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_RGBCOLOR_ICCCOLOR", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_NONE", (intptr_t)101, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_CURRENTCOLOR", (intptr_t)102, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_URI_NONE", (intptr_t)103, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_URI_CURRENTCOLOR", (intptr_t)104, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_URI_RGBCOLOR", (intptr_t)105, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_URI_RGBCOLOR_ICCCOLOR", (intptr_t)106, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_URI", (intptr_t)107, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPaintConstructorTable = { 4095, JSSVGPaintConstructorTableValues, 0 };

class JSSVGPaintConstructor : public DOMObject {
public:
    JSSVGPaintConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSSVGPaintPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSSVGPaintConstructor::s_info = { "SVGPaintConstructor", 0, &JSSVGPaintConstructorTable, 0 };

bool JSSVGPaintConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPaintConstructor, DOMObject>(exec, &JSSVGPaintConstructorTable, this, propertyName, slot);
}

JSValue* JSSVGPaintConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSSVGPaintPrototypeTableValues[13] =
{
    { "SVG_PAINTTYPE_UNKNOWN", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_RGBCOLOR", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_RGBCOLOR_ICCCOLOR", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_NONE", (intptr_t)101, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_CURRENTCOLOR", (intptr_t)102, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_URI_NONE", (intptr_t)103, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_URI_CURRENTCOLOR", (intptr_t)104, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_URI_RGBCOLOR", (intptr_t)105, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_URI_RGBCOLOR_ICCCOLOR", (intptr_t)106, DontDelete|ReadOnly, 0 },
    { "SVG_PAINTTYPE_URI", (intptr_t)107, DontDelete|ReadOnly, 0 },
    { "setUri", (intptr_t)jsSVGPaintPrototypeFunctionSetUri, DontDelete|Function, 1 },
    { "setPaint", (intptr_t)jsSVGPaintPrototypeFunctionSetPaint, DontDelete|Function, 4 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGPaintPrototypeTable = { 4095, JSSVGPaintPrototypeTableValues, 0 };

const ClassInfo JSSVGPaintPrototype::s_info = { "SVGPaintPrototype", 0, &JSSVGPaintPrototypeTable, 0 };

JSObject* JSSVGPaintPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGPaint.prototype]]");
    return JSC::cacheGlobalObject<JSSVGPaintPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGPaintPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSSVGPaintPrototype, JSObject>(exec, &JSSVGPaintPrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGPaintPrototype::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

const ClassInfo JSSVGPaint::s_info = { "SVGPaint", &JSSVGColor::s_info, &JSSVGPaintTable , 0 };

JSSVGPaint::JSSVGPaint(JSObject* prototype, SVGPaint* impl)
    : JSSVGColor(prototype, impl)
{
}

bool JSSVGPaint::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGPaint, Base>(exec, &JSSVGPaintTable, this, propertyName, slot);
}

JSValue* JSSVGPaint::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case PaintTypeAttrNum: {
        SVGPaint* imp = static_cast<SVGPaint*>(impl());
        return jsNumber(exec, imp->paintType());
    }
    case UriAttrNum: {
        SVGPaint* imp = static_cast<SVGPaint*>(impl());
        return jsString(exec, imp->uri());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSSVGPaint::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[SVGPaint.constructor]]");
    return JSC::cacheGlobalObject<JSSVGPaintConstructor>(exec, *constructorIdentifier);
}

JSValue* jsSVGPaintPrototypeFunctionSetUri(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPaint::s_info))
        return throwError(exec, TypeError);
    JSSVGPaint* castedThisObj = static_cast<JSSVGPaint*>(thisValue);
    SVGPaint* imp = static_cast<SVGPaint*>(castedThisObj->impl());
    const UString& uri = args.at(exec, 0)->toString(exec);

    imp->setUri(uri);
    return jsUndefined();
}

JSValue* jsSVGPaintPrototypeFunctionSetPaint(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGPaint::s_info))
        return throwError(exec, TypeError);
    JSSVGPaint* castedThisObj = static_cast<JSSVGPaint*>(thisValue);
    SVGPaint* imp = static_cast<SVGPaint*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    SVGPaint::SVGPaintType paintType = static_cast<SVGPaint::SVGPaintType>(args.at(exec, 0)->toInt32(exec));
    const UString& uri = args.at(exec, 1)->toString(exec);
    const UString& rgbColor = args.at(exec, 2)->toString(exec);
    const UString& iccColor = args.at(exec, 3)->toString(exec);

    imp->setPaint(paintType, uri, rgbColor, iccColor, ec);
    setDOMException(exec, ec);
    return jsUndefined();
}


}

#endif // ENABLE(SVG)

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
#include "JSSVGViewElement.h"

#include <wtf/GetPtr.h>

#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedPreserveAspectRatio.h"
#include "JSSVGAnimatedRect.h"
#include "JSSVGStringList.h"
#include "SVGStringList.h"
#include "SVGViewElement.h"

#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGViewElement)

/* Hash table */

static const HashTableValue JSSVGViewElementTableValues[6] =
{
    { "viewTarget", (intptr_t)JSSVGViewElement::ViewTargetAttrNum, DontDelete|ReadOnly, 0 },
    { "externalResourcesRequired", (intptr_t)JSSVGViewElement::ExternalResourcesRequiredAttrNum, DontDelete|ReadOnly, 0 },
    { "viewBox", (intptr_t)JSSVGViewElement::ViewBoxAttrNum, DontDelete|ReadOnly, 0 },
    { "preserveAspectRatio", (intptr_t)JSSVGViewElement::PreserveAspectRatioAttrNum, DontDelete|ReadOnly, 0 },
    { "zoomAndPan", (intptr_t)JSSVGViewElement::ZoomAndPanAttrNum, DontDelete, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGViewElementTable = { 15, JSSVGViewElementTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGViewElementPrototypeTableValues[4] =
{
    { "SVG_ZOOMANDPAN_UNKNOWN", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "SVG_ZOOMANDPAN_DISABLE", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "SVG_ZOOMANDPAN_MAGNIFY", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGViewElementPrototypeTable = { 31, JSSVGViewElementPrototypeTableValues, 0 };

const ClassInfo JSSVGViewElementPrototype::s_info = { "SVGViewElementPrototype", 0, &JSSVGViewElementPrototypeTable, 0 };

JSObject* JSSVGViewElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGViewElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGViewElementPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGViewElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGViewElementPrototype, JSObject>(exec, &JSSVGViewElementPrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGViewElementPrototype::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

const ClassInfo JSSVGViewElement::s_info = { "SVGViewElement", &JSSVGElement::s_info, &JSSVGViewElementTable , 0 };

JSSVGViewElement::JSSVGViewElement(JSObject* prototype, SVGViewElement* impl)
    : JSSVGElement(prototype, impl)
{
}

bool JSSVGViewElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGViewElement, Base>(exec, &JSSVGViewElementTable, this, propertyName, slot);
}

JSValue* JSSVGViewElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ViewTargetAttrNum: {
        SVGViewElement* imp = static_cast<SVGViewElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->viewTarget()), imp);
    }
    case ExternalResourcesRequiredAttrNum: {
        SVGViewElement* imp = static_cast<SVGViewElement*>(impl());
        RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ViewBoxAttrNum: {
        SVGViewElement* imp = static_cast<SVGViewElement*>(impl());
        RefPtr<SVGAnimatedRect> obj = imp->viewBoxAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case PreserveAspectRatioAttrNum: {
        SVGViewElement* imp = static_cast<SVGViewElement*>(impl());
        RefPtr<SVGAnimatedPreserveAspectRatio> obj = imp->preserveAspectRatioAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ZoomAndPanAttrNum: {
        SVGViewElement* imp = static_cast<SVGViewElement*>(impl());
        return jsNumber(exec, imp->zoomAndPan());
    }
    }
    return 0;
}

void JSSVGViewElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSSVGViewElement, Base>(exec, propertyName, value, &JSSVGViewElementTable, this, slot);
}

void JSSVGViewElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case ZoomAndPanAttrNum: {
        SVGViewElement* imp = static_cast<SVGViewElement*>(impl());
        imp->setZoomAndPan(value->toInt32(exec));
        break;
    }
    }
}


}

#endif // ENABLE(SVG)
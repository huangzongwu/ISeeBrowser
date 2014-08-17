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

#ifndef JSSVGGElement_h
#define JSSVGGElement_h


#if ENABLE(SVG)

#include "JSSVGElement.h"

namespace WebCore {

class SVGGElement;

class JSSVGGElement : public JSSVGElement {
    typedef JSSVGElement Base;
public:
    JSSVGGElement(JSC::JSObject* prototype, SVGGElement*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    JSC::JSValue* getValueProperty(JSC::ExecState*, int token) const;
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue*, JSC::PutPropertySlot&);
    void putValueProperty(JSC::ExecState*, int, JSC::JSValue*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    enum {
        // Attributes
        RequiredFeaturesAttrNum, RequiredExtensionsAttrNum, SystemLanguageAttrNum, XmllangAttrNum, 
        XmlspaceAttrNum, ExternalResourcesRequiredAttrNum, ClassNameAttrNum, StyleAttrNum, 
        TransformAttrNum, NearestViewportElementAttrNum, FarthestViewportElementAttrNum, 
    };
};


class JSSVGGElementPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    JSSVGGElementPrototype(JSC::ExecState* exec)
        : JSC::JSObject(JSSVGElementPrototype::self(exec)) { }
};

// Functions

JSC::JSValue* jsSVGGElementPrototypeFunctionHasExtension(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGGElementPrototypeFunctionGetPresentationAttribute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGGElementPrototypeFunctionGetBBox(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGGElementPrototypeFunctionGetCTM(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGGElementPrototypeFunctionGetScreenCTM(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsSVGGElementPrototypeFunctionGetTransformToElement(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
} // namespace WebCore

#endif // ENABLE(SVG)

#endif
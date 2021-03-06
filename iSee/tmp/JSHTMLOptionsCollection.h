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

#ifndef JSHTMLOptionsCollection_h
#define JSHTMLOptionsCollection_h

#include "JSHTMLCollection.h"
#include "HTMLOptionsCollection.h"
namespace WebCore {

class HTMLOptionsCollection;

class JSHTMLOptionsCollection : public JSHTMLCollection {
    typedef JSHTMLCollection Base;
public:
    JSHTMLOptionsCollection(JSC::JSObject* prototype, HTMLOptionsCollection*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    JSC::JSValue* getValueProperty(JSC::ExecState*, int token) const;
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValue*, JSC::PutPropertySlot&);
    virtual void put(JSC::ExecState*, unsigned propertyName, JSC::JSValue*);
    void putValueProperty(JSC::ExecState*, int, JSC::JSValue*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    enum {
        // Attributes
        SelectedIndexAttrNum, LengthAttrNum, 
    };

    // Custom attributes
    JSC::JSValue* length(JSC::ExecState*) const;
    void setLength(JSC::ExecState*, JSC::JSValue*);

    // Custom functions
    JSC::JSValue* add(JSC::ExecState*, const JSC::ArgList&);
    JSC::JSValue* remove(JSC::ExecState*, const JSC::ArgList&);
    HTMLOptionsCollection* impl() const
    {
        return static_cast<HTMLOptionsCollection*>(Base::impl());
    }
    void indexSetter(JSC::ExecState*, unsigned index, JSC::JSValue*);
};

HTMLOptionsCollection* toHTMLOptionsCollection(JSC::JSValue*);

class JSHTMLOptionsCollectionPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    JSHTMLOptionsCollectionPrototype(JSC::ExecState* exec)
        : JSC::JSObject(JSHTMLCollectionPrototype::self(exec)) { }
};

// Functions

JSC::JSValue* jsHTMLOptionsCollectionPrototypeFunctionAdd(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
JSC::JSValue* jsHTMLOptionsCollectionPrototypeFunctionRemove(JSC::ExecState*, JSC::JSObject*, JSC::JSValue*, const JSC::ArgList&);
} // namespace WebCore

#endif

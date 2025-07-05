#include <webbind/DOMImplementation.hpp>
#include <webbind/DocumentType.hpp>
#include <webbind/XMLDocument.hpp>
#include <webbind/Document.hpp>


DOMImplementation DOMImplementation::take_ownership(Handle h) noexcept {
        return DOMImplementation(h);
    }
DOMImplementation DOMImplementation::clone() const noexcept { return *this; }
DOMImplementation::DOMImplementation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMImplementation::DOMImplementation(const emlite::Val &val) noexcept: emlite::Val(val) {}


DocumentType DOMImplementation::createDocumentType(const jsbind::DOMString& name, const jsbind::DOMString& publicId, const jsbind::DOMString& systemId) {
    return emlite::Val::call("createDocumentType", name, publicId, systemId).as<DocumentType>();
}

XMLDocument DOMImplementation::createDocument(const jsbind::DOMString& namespace_, const jsbind::DOMString& qualifiedName) {
    return emlite::Val::call("createDocument", namespace_, qualifiedName).as<XMLDocument>();
}

XMLDocument DOMImplementation::createDocument(const jsbind::DOMString& namespace_, const jsbind::DOMString& qualifiedName, const DocumentType& doctype) {
    return emlite::Val::call("createDocument", namespace_, qualifiedName, doctype).as<XMLDocument>();
}

Document DOMImplementation::createHTMLDocument() {
    return emlite::Val::call("createHTMLDocument").as<Document>();
}

Document DOMImplementation::createHTMLDocument(const jsbind::DOMString& title) {
    return emlite::Val::call("createHTMLDocument", title).as<Document>();
}

bool DOMImplementation::hasFeature() {
    return emlite::Val::call("hasFeature").as<bool>();
}


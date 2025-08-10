#include <webbind/DOMImplementation.hpp>
#include <webbind/DocumentType.hpp>
#include <webbind/XMLDocument.hpp>
#include <webbind/Document.hpp>

namespace webbind {

DOMImplementation DOMImplementation::take_ownership(Handle h) noexcept {
        return DOMImplementation(h);
    }
DOMImplementation DOMImplementation::clone() const noexcept { return *this; }
emlite::Val DOMImplementation::instance() noexcept { return emlite::Val::global("DOMImplementation"); }
DOMImplementation::DOMImplementation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
DOMImplementation::DOMImplementation(const emlite::Val &val) noexcept: emlite::Val(val) {}

DocumentType DOMImplementation::createDocumentType(const jsbind::String& name, const jsbind::String& publicId, const jsbind::String& systemId) {
    return emlite::Val::call("createDocumentType", name, publicId, systemId).as<DocumentType>();
}

XMLDocument DOMImplementation::createDocument(const jsbind::String& namespace_, const jsbind::String& qualifiedName) {
    return emlite::Val::call("createDocument", namespace_, qualifiedName).as<XMLDocument>();
}

XMLDocument DOMImplementation::createDocument(const jsbind::String& namespace_, const jsbind::String& qualifiedName, const DocumentType& doctype) {
    return emlite::Val::call("createDocument", namespace_, qualifiedName, doctype).as<XMLDocument>();
}

Document DOMImplementation::createHTMLDocument() {
    return emlite::Val::call("createHTMLDocument").as<Document>();
}

Document DOMImplementation::createHTMLDocument(const jsbind::String& title) {
    return emlite::Val::call("createHTMLDocument", title).as<Document>();
}

bool DOMImplementation::hasFeature() {
    return emlite::Val::call("hasFeature").as<bool>();
}


} // namespace webbind
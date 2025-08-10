#include "webbind/XSLTProcessor.hpp"
#include "webbind/Node.hpp"
#include "webbind/DocumentFragment.hpp"
#include "webbind/Document.hpp"

namespace webbind {

XSLTProcessor XSLTProcessor::take_ownership(Handle h) noexcept {
        return XSLTProcessor(h);
    }
XSLTProcessor XSLTProcessor::clone() const noexcept { return *this; }
emlite::Val XSLTProcessor::instance() noexcept { return emlite::Val::global("XSLTProcessor"); }
XSLTProcessor::XSLTProcessor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XSLTProcessor::XSLTProcessor(const emlite::Val &val) noexcept: emlite::Val(val) {}

XSLTProcessor::XSLTProcessor() : emlite::Val(emlite::Val::global("XSLTProcessor").new_()) {}

jsbind::Undefined XSLTProcessor::importStylesheet(const Node& style) {
    return emlite::Val::call("importStylesheet", style).as<jsbind::Undefined>();
}

DocumentFragment XSLTProcessor::transformToFragment(const Node& source, const Document& output) {
    return emlite::Val::call("transformToFragment", source, output).as<DocumentFragment>();
}

Document XSLTProcessor::transformToDocument(const Node& source) {
    return emlite::Val::call("transformToDocument", source).as<Document>();
}

jsbind::Undefined XSLTProcessor::setParameter(const jsbind::String& namespaceURI, const jsbind::String& localName, const jsbind::Any& value) {
    return emlite::Val::call("setParameter", namespaceURI, localName, value).as<jsbind::Undefined>();
}

jsbind::Any XSLTProcessor::getParameter(const jsbind::String& namespaceURI, const jsbind::String& localName) {
    return emlite::Val::call("getParameter", namespaceURI, localName).as<jsbind::Any>();
}

jsbind::Undefined XSLTProcessor::removeParameter(const jsbind::String& namespaceURI, const jsbind::String& localName) {
    return emlite::Val::call("removeParameter", namespaceURI, localName).as<jsbind::Undefined>();
}

jsbind::Undefined XSLTProcessor::clearParameters() {
    return emlite::Val::call("clearParameters").as<jsbind::Undefined>();
}

jsbind::Undefined XSLTProcessor::reset() {
    return emlite::Val::call("reset").as<jsbind::Undefined>();
}


} // namespace webbind
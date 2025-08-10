#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DocumentType;
class XMLDocument;
class Document;

/// Interface DOMImplementation
/// [`DOMImplementation`](https://developer.mozilla.org/en-US/docs/Web/API/DOMImplementation)
class DOMImplementation : public emlite::Val {
    explicit DOMImplementation(Handle h) noexcept;
public:
    explicit DOMImplementation(const emlite::Val &val) noexcept;
    static DOMImplementation take_ownership(Handle h) noexcept;
    [[nodiscard]] DOMImplementation clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The createDocumentType method.
    /// [`DOMImplementation.createDocumentType`](https://developer.mozilla.org/en-US/docs/Web/API/DOMImplementation/createDocumentType)
    DocumentType createDocumentType(const jsbind::String& name, const jsbind::String& publicId, const jsbind::String& systemId);
    /// The createDocument method.
    /// [`DOMImplementation.createDocument`](https://developer.mozilla.org/en-US/docs/Web/API/DOMImplementation/createDocument)
    XMLDocument createDocument(const jsbind::String& namespace_, const jsbind::String& qualifiedName);
    /// The createDocument method.
    /// [`DOMImplementation.createDocument`](https://developer.mozilla.org/en-US/docs/Web/API/DOMImplementation/createDocument)
    XMLDocument createDocument(const jsbind::String& namespace_, const jsbind::String& qualifiedName, const DocumentType& doctype);
    /// The createHTMLDocument method.
    /// [`DOMImplementation.createHTMLDocument`](https://developer.mozilla.org/en-US/docs/Web/API/DOMImplementation/createHTMLDocument)
    Document createHTMLDocument();
    /// The createHTMLDocument method.
    /// [`DOMImplementation.createHTMLDocument`](https://developer.mozilla.org/en-US/docs/Web/API/DOMImplementation/createHTMLDocument)
    Document createHTMLDocument(const jsbind::String& title);
    /// The hasFeature method.
    /// [`DOMImplementation.hasFeature`](https://developer.mozilla.org/en-US/docs/Web/API/DOMImplementation/hasFeature)
    bool hasFeature();
};

} // namespace webbind
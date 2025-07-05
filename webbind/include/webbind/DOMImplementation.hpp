#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DocumentType;
class XMLDocument;
class Document;


class DOMImplementation : public emlite::Val {
    explicit DOMImplementation(Handle h) noexcept;

public:
    explicit DOMImplementation(const emlite::Val &val) noexcept;
    static DOMImplementation take_ownership(Handle h) noexcept;

    DOMImplementation clone() const noexcept;
    DocumentType createDocumentType(const jsbind::DOMString& name, const jsbind::DOMString& publicId, const jsbind::DOMString& systemId);
    XMLDocument createDocument(const jsbind::DOMString& namespace_, const jsbind::DOMString& qualifiedName);
    XMLDocument createDocument(const jsbind::DOMString& namespace_, const jsbind::DOMString& qualifiedName, const DocumentType& doctype);
    Document createHTMLDocument();
    Document createHTMLDocument(const jsbind::DOMString& title);
    bool hasFeature();
};


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
    DocumentType createDocumentType(const jsbind::String& name, const jsbind::String& publicId, const jsbind::String& systemId);
    XMLDocument createDocument(const jsbind::String& namespace_, const jsbind::String& qualifiedName);
    XMLDocument createDocument(const jsbind::String& namespace_, const jsbind::String& qualifiedName, const DocumentType& doctype);
    Document createHTMLDocument();
    Document createHTMLDocument(const jsbind::String& title);
    bool hasFeature();
};


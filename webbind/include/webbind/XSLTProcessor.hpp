#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;
class DocumentFragment;
class Document;


class XSLTProcessor : public emlite::Val {
    explicit XSLTProcessor(Handle h) noexcept;

public:
    explicit XSLTProcessor(const emlite::Val &val) noexcept;
    static XSLTProcessor take_ownership(Handle h) noexcept;

    XSLTProcessor clone() const noexcept;
    XSLTProcessor();
    jsbind::Undefined importStylesheet(const Node& style);
    DocumentFragment transformToFragment(const Node& source, const Document& output);
    Document transformToDocument(const Node& source);
    jsbind::Undefined setParameter(const jsbind::DOMString& namespaceURI, const jsbind::DOMString& localName, const jsbind::Any& value);
    jsbind::Any getParameter(const jsbind::DOMString& namespaceURI, const jsbind::DOMString& localName);
    jsbind::Undefined removeParameter(const jsbind::DOMString& namespaceURI, const jsbind::DOMString& localName);
    jsbind::Undefined clearParameters();
    jsbind::Undefined reset();
};


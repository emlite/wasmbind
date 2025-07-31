#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;
class DocumentFragment;
class Document;


/// The XSLTProcessor class.
/// [`XSLTProcessor`](https://developer.mozilla.org/en-US/docs/Web/API/XSLTProcessor)
class XSLTProcessor : public emlite::Val {
    explicit XSLTProcessor(Handle h) noexcept;

public:
    explicit XSLTProcessor(const emlite::Val &val) noexcept;
    static XSLTProcessor take_ownership(Handle h) noexcept;

    [[nodiscard]] XSLTProcessor clone() const noexcept;
    /// The `new XSLTProcessor(..)` constructor, creating a new XSLTProcessor instance
    XSLTProcessor();
    /// The importStylesheet method.
    /// [`XSLTProcessor.importStylesheet`](https://developer.mozilla.org/en-US/docs/Web/API/XSLTProcessor/importStylesheet)
    jsbind::Undefined importStylesheet(const Node& style);
    /// The transformToFragment method.
    /// [`XSLTProcessor.transformToFragment`](https://developer.mozilla.org/en-US/docs/Web/API/XSLTProcessor/transformToFragment)
    DocumentFragment transformToFragment(const Node& source, const Document& output);
    /// The transformToDocument method.
    /// [`XSLTProcessor.transformToDocument`](https://developer.mozilla.org/en-US/docs/Web/API/XSLTProcessor/transformToDocument)
    Document transformToDocument(const Node& source);
    /// The setParameter method.
    /// [`XSLTProcessor.setParameter`](https://developer.mozilla.org/en-US/docs/Web/API/XSLTProcessor/setParameter)
    jsbind::Undefined setParameter(const jsbind::String& namespaceURI, const jsbind::String& localName, const jsbind::Any& value);
    /// The getParameter method.
    /// [`XSLTProcessor.getParameter`](https://developer.mozilla.org/en-US/docs/Web/API/XSLTProcessor/getParameter)
    jsbind::Any getParameter(const jsbind::String& namespaceURI, const jsbind::String& localName);
    /// The removeParameter method.
    /// [`XSLTProcessor.removeParameter`](https://developer.mozilla.org/en-US/docs/Web/API/XSLTProcessor/removeParameter)
    jsbind::Undefined removeParameter(const jsbind::String& namespaceURI, const jsbind::String& localName);
    /// The clearParameters method.
    /// [`XSLTProcessor.clearParameters`](https://developer.mozilla.org/en-US/docs/Web/API/XSLTProcessor/clearParameters)
    jsbind::Undefined clearParameters();
    /// The reset method.
    /// [`XSLTProcessor.reset`](https://developer.mozilla.org/en-US/docs/Web/API/XSLTProcessor/reset)
    jsbind::Undefined reset();
};


#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;


/// The XMLSerializer class.
/// [`XMLSerializer`](https://developer.mozilla.org/en-US/docs/Web/API/XMLSerializer)
class XMLSerializer : public emlite::Val {
    explicit XMLSerializer(Handle h) noexcept;

public:
    explicit XMLSerializer(const emlite::Val &val) noexcept;
    static XMLSerializer take_ownership(Handle h) noexcept;

    [[nodiscard]] XMLSerializer clone() const noexcept;
    /// The `new XMLSerializer(..)` constructor, creating a new XMLSerializer instance
    XMLSerializer();
    /// The serializeToString method.
    /// [`XMLSerializer.serializeToString`](https://developer.mozilla.org/en-US/docs/Web/API/XMLSerializer/serializeToString)
    jsbind::String serializeToString(const Node& root);
};


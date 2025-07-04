#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;


class XMLSerializer : public emlite::Val {
    explicit XMLSerializer(Handle h) noexcept;

public:
    explicit XMLSerializer(const emlite::Val &val) noexcept;
    static XMLSerializer take_ownership(Handle h) noexcept;

    XMLSerializer clone() const noexcept;
    XMLSerializer();
    jsbind::DOMString serializeToString(const Node& root);
};


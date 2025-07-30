#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class Element;
class Node;


class NamedFlow : public EventTarget {
    explicit NamedFlow(Handle h) noexcept;

public:
    explicit NamedFlow(const emlite::Val &val) noexcept;
    static NamedFlow take_ownership(Handle h) noexcept;

    NamedFlow clone() const noexcept;
    jsbind::String name() const;
    bool overset() const;
    jsbind::TypedArray<Element> getRegions();
    short firstEmptyRegionIndex() const;
    jsbind::TypedArray<Node> getContent();
    jsbind::TypedArray<Element> getRegionsByContent(const Node& node);
};


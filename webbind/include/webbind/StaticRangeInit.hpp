#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Node;

/// Dictionary type StaticRangeInit
/// [`StaticRangeInit`](https://developer.mozilla.org/en-US/docs/Web/API/StaticRangeInit)
class StaticRangeInit : public emlite::Val {
  explicit StaticRangeInit(Handle h) noexcept;
public:
    static StaticRangeInit take_ownership(Handle h) noexcept;
    explicit StaticRangeInit(const emlite::Val &val) noexcept;
    StaticRangeInit() noexcept;
    [[nodiscard]] StaticRangeInit clone() const noexcept;
    [[nodiscard]] Node startContainer() const;
    void startContainer(const Node& value);
    [[nodiscard]] unsigned long startOffset() const;
    void startOffset(unsigned long value);
    [[nodiscard]] Node endContainer() const;
    void endContainer(const Node& value);
    [[nodiscard]] unsigned long endOffset() const;
    void endOffset(unsigned long value);
};

} // namespace webbind
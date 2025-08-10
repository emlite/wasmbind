#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMRect;

/// Interface DOMRectList
/// [`DOMRectList`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectList)
class DOMRectList : public emlite::Val {
    explicit DOMRectList(Handle h) noexcept;
public:
    explicit DOMRectList(const emlite::Val &val) noexcept;
    static DOMRectList take_ownership(Handle h) noexcept;
    [[nodiscard]] DOMRectList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`DOMRectList.length`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectList/length)
    /// [`DOMRectList.length`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectList/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`DOMRectList.item`](https://developer.mozilla.org/en-US/docs/Web/API/DOMRectList/item)
    DOMRect item(unsigned long index);
};

} // namespace webbind
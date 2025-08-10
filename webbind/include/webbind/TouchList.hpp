#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Touch;

/// Interface TouchList
/// [`TouchList`](https://developer.mozilla.org/en-US/docs/Web/API/TouchList)
class TouchList : public emlite::Val {
    explicit TouchList(Handle h) noexcept;
public:
    explicit TouchList(const emlite::Val &val) noexcept;
    static TouchList take_ownership(Handle h) noexcept;
    [[nodiscard]] TouchList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`TouchList.length`](https://developer.mozilla.org/en-US/docs/Web/API/TouchList/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`TouchList.item`](https://developer.mozilla.org/en-US/docs/Web/API/TouchList/item)
    Touch item(unsigned long index);
};

} // namespace webbind
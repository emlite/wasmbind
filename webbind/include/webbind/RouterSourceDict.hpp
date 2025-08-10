#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RouterSourceDict
/// [`RouterSourceDict`](https://developer.mozilla.org/en-US/docs/Web/API/RouterSourceDict)
class RouterSourceDict : public emlite::Val {
  explicit RouterSourceDict(Handle h) noexcept;
public:
    static RouterSourceDict take_ownership(Handle h) noexcept;
    explicit RouterSourceDict(const emlite::Val &val) noexcept;
    RouterSourceDict() noexcept;
    [[nodiscard]] RouterSourceDict clone() const noexcept;
    [[nodiscard]] jsbind::String cacheName() const;
    void cacheName(const jsbind::String& value);
};

} // namespace webbind
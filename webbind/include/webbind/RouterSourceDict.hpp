#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RouterSourceDict
class RouterSourceDict : public emlite::Val {
  explicit RouterSourceDict(Handle h) noexcept;
public:
    static RouterSourceDict take_ownership(Handle h) noexcept;
    explicit RouterSourceDict(const emlite::Val &val) noexcept;
    RouterSourceDict() noexcept;
    [[nodiscard]] RouterSourceDict clone() const noexcept;
    /// Getter of the `cacheName` attribute.
    [[nodiscard]] jsbind::String cacheName() const;
    /// Setter of the `cacheName` attribute.
    void cacheName(const jsbind::String& value);
};

} // namespace webbind
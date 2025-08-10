#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SanitizerElementNamespace
/// [`SanitizerElementNamespace`](https://developer.mozilla.org/en-US/docs/Web/API/SanitizerElementNamespace)
class SanitizerElementNamespace : public emlite::Val {
  explicit SanitizerElementNamespace(Handle h) noexcept;
public:
    static SanitizerElementNamespace take_ownership(Handle h) noexcept;
    explicit SanitizerElementNamespace(const emlite::Val &val) noexcept;
    SanitizerElementNamespace() noexcept;
    [[nodiscard]] SanitizerElementNamespace clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String namespace_() const;
    void namespace_(const jsbind::String& value);
};

} // namespace webbind
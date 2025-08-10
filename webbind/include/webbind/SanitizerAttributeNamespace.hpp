#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SanitizerAttributeNamespace
/// [`SanitizerAttributeNamespace`](https://developer.mozilla.org/en-US/docs/Web/API/SanitizerAttributeNamespace)
class SanitizerAttributeNamespace : public emlite::Val {
  explicit SanitizerAttributeNamespace(Handle h) noexcept;
public:
    static SanitizerAttributeNamespace take_ownership(Handle h) noexcept;
    explicit SanitizerAttributeNamespace(const emlite::Val &val) noexcept;
    SanitizerAttributeNamespace() noexcept;
    [[nodiscard]] SanitizerAttributeNamespace clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String namespace_() const;
    void namespace_(const jsbind::String& value);
};

} // namespace webbind
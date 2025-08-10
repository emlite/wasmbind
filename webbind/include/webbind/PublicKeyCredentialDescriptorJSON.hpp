#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialDescriptorJSON
/// [`PublicKeyCredentialDescriptorJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PublicKeyCredentialDescriptorJSON)
class PublicKeyCredentialDescriptorJSON : public emlite::Val {
  explicit PublicKeyCredentialDescriptorJSON(Handle h) noexcept;
public:
    static PublicKeyCredentialDescriptorJSON take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialDescriptorJSON(const emlite::Val &val) noexcept;
    PublicKeyCredentialDescriptorJSON() noexcept;
    [[nodiscard]] PublicKeyCredentialDescriptorJSON clone() const noexcept;
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
    [[nodiscard]] jsbind::Any id() const;
    void id(const jsbind::Any& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::String> transports() const;
    void transports(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind
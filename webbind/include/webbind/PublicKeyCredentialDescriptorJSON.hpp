#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PublicKeyCredentialDescriptorJSON
class PublicKeyCredentialDescriptorJSON : public emlite::Val {
  explicit PublicKeyCredentialDescriptorJSON(Handle h) noexcept;
public:
    static PublicKeyCredentialDescriptorJSON take_ownership(Handle h) noexcept;
    explicit PublicKeyCredentialDescriptorJSON(const emlite::Val &val) noexcept;
    PublicKeyCredentialDescriptorJSON() noexcept;
    [[nodiscard]] PublicKeyCredentialDescriptorJSON clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::String& value);
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::Any id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::Any& value);
    /// Getter of the `transports` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::String> transports() const;
    /// Setter of the `transports` attribute.
    void transports(const jsbind::TypedArray<jsbind::String>& value);
};

} // namespace webbind
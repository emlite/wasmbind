#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CollectedClientData
class CollectedClientData : public emlite::Val {
  explicit CollectedClientData(Handle h) noexcept;
public:
    static CollectedClientData take_ownership(Handle h) noexcept;
    explicit CollectedClientData(const emlite::Val &val) noexcept;
    CollectedClientData() noexcept;
    [[nodiscard]] CollectedClientData clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::String& value);
    /// Getter of the `challenge` attribute.
    [[nodiscard]] jsbind::String challenge() const;
    /// Setter of the `challenge` attribute.
    void challenge(const jsbind::String& value);
    /// Getter of the `origin` attribute.
    [[nodiscard]] jsbind::String origin() const;
    /// Setter of the `origin` attribute.
    void origin(const jsbind::String& value);
    /// Getter of the `crossOrigin` attribute.
    [[nodiscard]] bool crossOrigin() const;
    /// Setter of the `crossOrigin` attribute.
    void crossOrigin(bool value);
    /// Getter of the `topOrigin` attribute.
    [[nodiscard]] jsbind::String topOrigin() const;
    /// Setter of the `topOrigin` attribute.
    void topOrigin(const jsbind::String& value);
};

} // namespace webbind
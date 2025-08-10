#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type CollectedClientData
/// [`CollectedClientData`](https://developer.mozilla.org/en-US/docs/Web/API/CollectedClientData)
class CollectedClientData : public emlite::Val {
  explicit CollectedClientData(Handle h) noexcept;
public:
    static CollectedClientData take_ownership(Handle h) noexcept;
    explicit CollectedClientData(const emlite::Val &val) noexcept;
    CollectedClientData() noexcept;
    [[nodiscard]] CollectedClientData clone() const noexcept;
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
    [[nodiscard]] jsbind::String challenge() const;
    void challenge(const jsbind::String& value);
    [[nodiscard]] jsbind::String origin() const;
    void origin(const jsbind::String& value);
    [[nodiscard]] bool crossOrigin() const;
    void crossOrigin(bool value);
    [[nodiscard]] jsbind::String topOrigin() const;
    void topOrigin(const jsbind::String& value);
};

} // namespace webbind
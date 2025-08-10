#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BlobPropertyBag
class BlobPropertyBag : public emlite::Val {
  explicit BlobPropertyBag(Handle h) noexcept;
public:
    static BlobPropertyBag take_ownership(Handle h) noexcept;
    explicit BlobPropertyBag(const emlite::Val &val) noexcept;
    BlobPropertyBag() noexcept;
    [[nodiscard]] BlobPropertyBag clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] jsbind::String type() const;
    /// Setter of the `type` attribute.
    void type(const jsbind::String& value);
    /// Getter of the `endings` attribute.
    [[nodiscard]] EndingType endings() const;
    /// Setter of the `endings` attribute.
    void endings(const EndingType& value);
};

} // namespace webbind
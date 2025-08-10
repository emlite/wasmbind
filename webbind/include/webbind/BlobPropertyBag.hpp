#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type BlobPropertyBag
/// [`BlobPropertyBag`](https://developer.mozilla.org/en-US/docs/Web/API/BlobPropertyBag)
class BlobPropertyBag : public emlite::Val {
  explicit BlobPropertyBag(Handle h) noexcept;
public:
    static BlobPropertyBag take_ownership(Handle h) noexcept;
    explicit BlobPropertyBag(const emlite::Val &val) noexcept;
    BlobPropertyBag() noexcept;
    [[nodiscard]] BlobPropertyBag clone() const noexcept;
    [[nodiscard]] jsbind::String type() const;
    void type(const jsbind::String& value);
    [[nodiscard]] EndingType endings() const;
    void endings(const EndingType& value);
};

} // namespace webbind
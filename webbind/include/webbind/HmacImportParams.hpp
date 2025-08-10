#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Algorithm.hpp"

namespace webbind {

/// Dictionary type HmacImportParams
/// [`HmacImportParams`](https://developer.mozilla.org/en-US/docs/Web/API/HmacImportParams)
class HmacImportParams : public Algorithm {
  explicit HmacImportParams(Handle h) noexcept;
public:
    static HmacImportParams take_ownership(Handle h) noexcept;
    explicit HmacImportParams(const emlite::Val &val) noexcept;
    HmacImportParams() noexcept;
    [[nodiscard]] HmacImportParams clone() const noexcept;
    [[nodiscard]] jsbind::Any hash() const;
    void hash(const jsbind::Any& value);
    [[nodiscard]] unsigned long length() const;
    void length(unsigned long value);
};

} // namespace webbind
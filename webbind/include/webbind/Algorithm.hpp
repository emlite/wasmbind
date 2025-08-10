#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type Algorithm
/// [`Algorithm`](https://developer.mozilla.org/en-US/docs/Web/API/Algorithm)
class Algorithm : public emlite::Val {
  explicit Algorithm(Handle h) noexcept;
public:
    static Algorithm take_ownership(Handle h) noexcept;
    explicit Algorithm(const emlite::Val &val) noexcept;
    Algorithm() noexcept;
    [[nodiscard]] Algorithm clone() const noexcept;
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
};

} // namespace webbind
#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type ProgressEventInit
/// [`ProgressEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/ProgressEventInit)
class ProgressEventInit : public EventInit {
  explicit ProgressEventInit(Handle h) noexcept;
public:
    static ProgressEventInit take_ownership(Handle h) noexcept;
    explicit ProgressEventInit(const emlite::Val &val) noexcept;
    ProgressEventInit() noexcept;
    [[nodiscard]] ProgressEventInit clone() const noexcept;
    [[nodiscard]] bool lengthComputable() const;
    void lengthComputable(bool value);
    [[nodiscard]] double loaded() const;
    void loaded(double value);
    [[nodiscard]] double total() const;
    void total(double value);
};

} // namespace webbind
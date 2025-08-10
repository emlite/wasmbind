#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type ProgressEventInit
class ProgressEventInit : public EventInit {
  explicit ProgressEventInit(Handle h) noexcept;
public:
    static ProgressEventInit take_ownership(Handle h) noexcept;
    explicit ProgressEventInit(const emlite::Val &val) noexcept;
    ProgressEventInit() noexcept;
    [[nodiscard]] ProgressEventInit clone() const noexcept;
    /// Getter of the `lengthComputable` attribute.
    [[nodiscard]] bool lengthComputable() const;
    /// Setter of the `lengthComputable` attribute.
    void lengthComputable(bool value);
    /// Getter of the `loaded` attribute.
    [[nodiscard]] double loaded() const;
    /// Setter of the `loaded` attribute.
    void loaded(double value);
    /// Getter of the `total` attribute.
    [[nodiscard]] double total() const;
    /// Setter of the `total` attribute.
    void total(double value);
};

} // namespace webbind
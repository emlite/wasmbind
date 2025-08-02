#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GPUSampler class.
/// [`GPUSampler`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSampler)
class GPUSampler : public emlite::Val {
    explicit GPUSampler(Handle h) noexcept;

public:
    explicit GPUSampler(const emlite::Val &val) noexcept;
    static GPUSampler take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUSampler clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `label` attribute.
    /// [`GPUSampler.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSampler/label)
    [[nodiscard]] jsbind::String label() const;
    /// Setter of the `label` attribute.
    /// [`GPUSampler.label`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSampler/label)
    void label(const jsbind::String& value);
};


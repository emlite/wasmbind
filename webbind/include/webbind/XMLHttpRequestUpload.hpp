#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "XMLHttpRequestEventTarget.hpp"

namespace webbind {

/// Interface XMLHttpRequestUpload
/// [`XMLHttpRequestUpload`](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequestUpload)
class XMLHttpRequestUpload : public XMLHttpRequestEventTarget {
    explicit XMLHttpRequestUpload(Handle h) noexcept;
public:
    explicit XMLHttpRequestUpload(const emlite::Val &val) noexcept;
    static XMLHttpRequestUpload take_ownership(Handle h) noexcept;
    [[nodiscard]] XMLHttpRequestUpload clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind
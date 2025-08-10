#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Document.hpp"

namespace webbind {

/// Interface XMLDocument
/// [`XMLDocument`](https://developer.mozilla.org/en-US/docs/Web/API/XMLDocument)
class XMLDocument : public Document {
    explicit XMLDocument(Handle h) noexcept;
public:
    explicit XMLDocument(const emlite::Val &val) noexcept;
    static XMLDocument take_ownership(Handle h) noexcept;
    [[nodiscard]] XMLDocument clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind
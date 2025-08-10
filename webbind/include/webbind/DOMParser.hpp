#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class Document;

/// Interface DOMParser
/// [`DOMParser`](https://developer.mozilla.org/en-US/docs/Web/API/DOMParser)
class DOMParser : public emlite::Val {
    explicit DOMParser(Handle h) noexcept;
public:
    explicit DOMParser(const emlite::Val &val) noexcept;
    static DOMParser take_ownership(Handle h) noexcept;
    [[nodiscard]] DOMParser clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DOMParser(..)` constructor, creating a new DOMParser instance
    DOMParser();
    /// The parseFromString method.
    /// [`DOMParser.parseFromString`](https://developer.mozilla.org/en-US/docs/Web/API/DOMParser/parseFromString)
    Document parseFromString(const jsbind::Any& string, const DOMParserSupportedType& type);
};

} // namespace webbind
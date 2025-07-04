#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Document;


class DOMParser : public emlite::Val {
    explicit DOMParser(Handle h) noexcept;

public:
    explicit DOMParser(const emlite::Val &val) noexcept;
    static DOMParser take_ownership(Handle h) noexcept;

    DOMParser clone() const noexcept;
    DOMParser();
    Document parseFromString(const jsbind::Any& string, const DOMParserSupportedType& type);
};


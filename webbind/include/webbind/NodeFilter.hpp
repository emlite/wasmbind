#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Node;

/// Callback interface NodeFilter
/// Generated wrapper for WebIDL `callback interface NodeFilter`
class NodeFilter : public emlite::Val {
    explicit NodeFilter(Handle h) noexcept;
public:
    explicit NodeFilter(const emlite::Val &val) noexcept;
    static NodeFilter take_ownership(Handle h) noexcept;
    [[nodiscard]] NodeFilter clone() const noexcept;

    // Converting constructors from functions
    NodeFilter(const jsbind::Function &fn) noexcept;
    NodeFilter(const jsbind::Function::Fn<unsigned short(Node)> &fn) noexcept;

    [[nodiscard]] unsigned short acceptNode(const Node& node) const;
};

} // namespace webbind
#include <webbind/AssignedNodesOptions.hpp>

using emlite::Val;
namespace webbind {

AssignedNodesOptions::AssignedNodesOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AssignedNodesOptions AssignedNodesOptions::take_ownership(Handle h) noexcept {
        return AssignedNodesOptions(h);
    }
AssignedNodesOptions::AssignedNodesOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AssignedNodesOptions::AssignedNodesOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AssignedNodesOptions AssignedNodesOptions::clone() const noexcept { return *this; }

bool AssignedNodesOptions::flatten() const {
    return emlite::Val::get("flatten").as<bool>();
}

void AssignedNodesOptions::flatten(bool value) {
    emlite::Val::set("flatten", value);
}


} // namespace webbind
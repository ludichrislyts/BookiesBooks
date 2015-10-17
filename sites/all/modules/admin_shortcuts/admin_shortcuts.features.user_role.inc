<?php
/**
 * @file
 * admin_shortcuts.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function admin_shortcuts_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  return $roles;
}

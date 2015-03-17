<?php
/**
 * @file
 * our_team.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function our_team_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_our-team:our-team
  $menu_links['main-menu_our-team:our-team'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'our-team',
    'router_path' => 'our-team',
    'link_title' => 'Our Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_our-team:our-team',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Our Team');


  return $menu_links;
}

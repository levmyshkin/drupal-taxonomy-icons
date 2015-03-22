<?php
/**
 * @file
 * site_made_ru_features_taxonomy_icons.features.inc
 */

/**
 * Implements hook_views_api().
 */
function site_made_ru_features_taxonomy_icons_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function site_made_ru_features_taxonomy_icons_node_info() {
  $items = array(
    'film' => array(
      'name' => t('Фильм'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
